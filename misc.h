void *alloc(unsigned int);
char *allocstring(char *);
void replacestring(char **, char *, char *);
int isconst(char *);
void assignlabel(struct bblk *, char *);
struct bblk *newblk(char *);
void freeblk(struct bblk *);
int inblist(struct blist *, struct bblk *);
void freeblist(struct blist *);
struct bplist *inbplist(struct bplist *, char *);
void freebplist(struct bplist *);
void addtobplist(struct bplist **, char *, char *);
void deletefrombplist(struct bplist **, char *);
struct quadline *newline(char *);
void hookupline(struct bblk *, struct quadline *, struct quadline *);
void unhookline(struct quadline *);
struct quadline *insline(struct bblk *, struct quadline *, char *);
struct quadline *inslineafter(struct bblk *, struct quadline *, char *);
struct quadline *prevline(struct quadline *);
void delline(struct quadline *);
void freeitemarray(struct quadline *);
void freeline(struct quadline *);
void addtoblist(struct blist **, struct bblk *);
void sortblist(struct blist *);
void orderpreds();
void deleteblk(struct bblk *);
void unlinkblk(struct bblk *);
void delfrompreds_succs(struct bblk *);
void delfromsuccs_preds(struct bblk *);
struct bblk *delfromblist(struct blist **, struct bblk *);
void quit(int);
