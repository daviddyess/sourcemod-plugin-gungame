#define MAX_RANK         10 /* DO NOT CHANGE THE DEFINE MAX_RANK */

#if !defined SQL_SUPPORT
    new bool:RankChange;
#endif
new bool:HasRank;

/* Top10 ranks */
new String:PlayerAuthid[MAX_RANK][64];
new String:PlayerName[MAX_RANK][MAX_NAME_SIZE];
new PlayerWins[MAX_RANK];
