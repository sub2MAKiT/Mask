

extern long long _step;

#ifdef MKT_DEBUG
#define DEBUG(x)              \
printf("\033[%d;40m[%d]" x "\033[0;40m\n",(int)((_step % 6) + 1 + (int)((float)(((_step % 2) + 1)*1.5)) * 30),(int)_step);_step++
//assert(x);printf("\n");step++
#else
#define DEBUG(x)                                                \
0
#endif