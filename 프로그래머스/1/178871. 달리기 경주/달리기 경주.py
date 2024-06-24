def solution(players, callings):
    
    rank = {player: i for i, player in enumerate(players)}
    
    for call in callings:
        curr_index = rank[call]
        
        if curr_index > 0:
            prev_index = curr_index - 1
            prev_player = players[prev_index]
            
            
            players[curr_index], players[prev_index] = players[prev_index], players[curr_index]
            
            rank[call] = prev_index
            rank[prev_player] = curr_index
    
    return players
