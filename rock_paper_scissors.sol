pragma solidity ^0.4.13;

contract RockPaperScissors {
  struct Game {
    address creator;
    address player;
    uint bet;
    uint gameNumb;
  }
  event GameCreated(address creator, uint gameNumber, uint bet);
  event GameStarted(address[] players, uint gameNumber);
  event GameComplete(address winner, uint gameNumber);
  mapping (uint => game) games;
  uint gameNum = 0;
  
  /**
 * Use this endpoint to create a game. 
 * It is a payable endpoint meaning the creator of the game will send ether directly to it.
 * The ether sent to the contract should be used as the bet for the game.
 * @param {address} participant - The address of the participant allowed to join the game.
 */
  function createGame(address participant) payable {
    uint bet;
    Game currGame;
    currGame.bet = msg.value;
    currGame.creator = msg.sender;
    gameNum++;
    currGame.gameNumb = gameNum;
    games[gameNum] = game;
    GameCreated(msg.sender, gameNum, game.bet);
  }
  
  /**
 * Use this endpoint to join a game.
 * It is a payable endpoint meaning the joining participant will send ether directly to it.
 * The ether sent to the contract should be used as the bet for the game. 
 * Any additional ether that exceeds the original bet of the creator should be refunded.
 * @param {uint} gameNumber - Corresponds to the gameNumber provided by the GameCreated event
 */
  function joinGame(uint gameNumber) payable {
    uint proposedBet;
    uint existingBet;
    uint surplus;
    address[] players;
    Game currGame;
    proposedBet = msg.value;
    currGame = games[gameNumber];
    existingBet = currGame.bet;
    require (proposedBet > existingBet);
    if (proposedBet > existingBet) {
       surplus = proposedBet - existingBet;
       msg.sender.send(surplus);
    }
    currGame.player = msg.sender;
    players[0] = currGame.creator;
    players[1] = currGame.player;
    GameStarted(players, gameNumber);
  }
  
  /**
 * Use this endpoint to make a move during a game 
 * @param {uint} gameNumber - Corresponds to the gameNumber provided by the GameCreated event
 * @param {uint} moveNumber - The move for this player (1, 2, or 3 for rock, paper, scissors respectively)
 */
  function makeMove(uint gameNumber, uint moveNumber) { 
    
  }
}
