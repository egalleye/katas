pragma solidity ^0.4.13;

contract GiftCoin {
  mapping (address => uint) coins;
  address public owner;

  function GiftCoin() {
    owner = msg.sender;
  }
  
  event GiftSent(
      address from,
      address to,
      uint amount
  );
  
  function sendGift(address receiver, uint amount) {
    if (amount < coins[msg.sender]) {
      coins[msg.sender] -= amount;
      coins[receiver] += amount;
      GiftSent(msg.sender, receiver, amount);
    }
  }
  
  function mintCoins(address target, uint256 mintedAmount) onlyOwner {
    coins[target] += mintedAmount;
  }
  
  modifier onlyOwner {
    require(msg.sender == owner);
    _; 
  }

  function balanceOf(address addr) returns(uint) {
    return coins[addr];
  }
}
