extern PROGRAM *the_program;

extern PROGRAM  *make_program  (DECLLIST *dl, BLOCK    *b);
extern BLOCK    *make_block    (DECLLIST *dl, STMTLIST *s);

/* DECL routines */

extern DECLLIST *make_decllist (DECL *d, DECLLIST *dl);
extern DECL     *make_decl     (DECLKIND k, IDENT *id);

extern VARDEF      *make_vardef (TYPE *t);
extern FORMAL      *make_formal (MODEWHICH m, TYPE *t);
extern PROCFUNCDEF *make_procfuncdef (DECLLIST *formals, IDENT *type_id, BLOCK *b);

extern DECL   *make_program_decl  (IDENT *id);
extern DECL   *make_var_decl      (IDENT *id, TYPE *t);
extern DECL   *make_const_decl    (IDENT *id, EXPR *c);
extern DECL   *make_type_decl     (IDENT *id, TYPE *t);
extern DECL   *make_formal_decl   (IDENT *id, MODEWHICH m, TYPE *t);
extern DECL   *make_special_decl  (IDENT *id, SPECIALWHICH skind);

extern DECL   *make_procfunc_decl (IDENT *name_id, DECLLIST *formals, IDENT *type_id, BLOCK *b);

/* TYPE routines */

extern TYPE *make_type (TYPEKIND k);

extern TYPESUBR  *make_typesubr  (EXPR *lo, EXPR *hi);
extern TYPEARRAY *make_typearray (TYPE *idx, TYPE *elt);

extern TYPE *make_bind_type              (BINDING *b);
extern TYPE *make_id_type                (IDENT *id);
extern TYPE *make_enum_type              (BINDLIST *bl);
extern TYPE *make_range_type             (EXPR *lo, EXPR *hi);
extern TYPE *make_array_type             (TYPE *idx, TYPE *elt);
extern TYPE *make_record_fieldList_type  (FIELDLIST *fieldList);
extern TYPE *make_record_type            ();
extern TYPE *make_not_bind_id_type       ();
extern TYPE *make_elt_type               (TYPE *idx, TYPE *elt);


/* FIELD routines */

extern FIELD     *make_field      (IDENT *id, TYPE *type);
extern FIELDLIST *make_fieldlist  (FIELD *field, FIELDLIST *opt_fieldlist);

/* STMT routines */

extern STMT        *make_stmt        (STMTKIND k);
extern STMTLIST    *make_stmts       (STMT *stmt, STMTLIST *stmts);
extern STMTASSIGN  *make_stmtassign  (EXPR *v, EXPR *e);
extern STMTWHILE   *make_stmtwhile   (EXPR *test, STMT *body);
extern STMTCASE    *make_stmtcase    (EXPR *expr, CASELIST *list);
extern STMTIF      *make_stmtif      (EXPR *expr, STMT *then, STMT *optElse);
extern STMTREPEAT  *make_stmtrepeat  (EXPR *expr, STMTLIST *stmts);
extern STMTFOR     *make_stmtfor     (IDENT *name, EXPR *init, EXPR *to, STMT *stmt, int upward);

/* CASE LIST */

extern CASEARM    *make_caselist_element  (EXPRLIST *labels, STMT *stmt);
extern CASELIST   *make_caselist_elements (CASEARM *element, CASELIST *elements);

/* statement constructor functions */

extern STMT *make_assign_stmt   (EXPR *v, EXPR *e);
extern STMT *make_whilestmt     (EXPR *test, STMT *body);
extern STMT *make_call_stmt     (EXPR *e);
extern STMT *make_compound_stmt (STMTLIST *stmts);
extern STMT *make_case_stmt     (EXPR *expr, CASELIST *list);
extern STMT *make_if_stmt       (EXPR *expr, STMT *then, STMT *optElse);
extern STMT *make_repeat_stmt   (EXPR *expr, STMTLIST *stmts);
extern STMT *make_for_stmt      (IDENT *name, EXPR *init, EXPR *to, STMT *stmt, int upward);

/* general functions */

extern EXPR     *make_expr     (EXPRKIND k);
extern EXPRLIST *make_exprlist (EXPR *e, EXPRLIST *el);

/* helper functions */

extern EXPRBINARY *make_exprbinary (int op, EXPR *left, EXPR *right);
extern EXPRUNARY  *make_exprunary  (int op, EXPR *expr);
extern EXPRCALL   *make_exprcall   (BINDING *b, EXPRLIST *args);

/* EXPR constructing functions */

extern EXPR *make_bind_expr (IDENT *id);
extern EXPR *make_id_expr   (IDENT *id);
extern EXPR *make_bin_expr  (int op, EXPR *left, EXPR *right);
extern EXPR *make_un_expr   (int op, EXPR *expr);
extern EXPR *make_int_expr  (int n);
extern EXPR *make_txt_expr  (TEXT *txt);
extern EXPR *make_call_expr (IDENT *id, EXPRLIST *args);

extern BINDING  *make_binding  (IDENT *id);
extern BINDLIST *make_bindlist (BINDING *b, BINDLIST *bl);

extern void check_program (PROGRAM *p);
extern void check_block   (BLOCK *blk);

extern void alloc_fold_program (PROGRAM *p);
extern void alloc_fold_block   (BLOCK *b);

extern void tree_print (char *fmt, ...);
extern void print_id (IDENT *id);
extern void print_binding (BINDING *b);
extern void print_start (char *s);
extern void print_finish ();

extern void print_indent (void);
extern void print_op (int op);
extern void print_program (PROGRAM *p);
extern void print_block (BLOCK *b);
extern void print_decllist (DECLLIST *dl);
extern void print_decl (DECL *d);
extern void print_stmtlist (STMTLIST *sl);
extern void print_stmt (STMT *s);
extern void print_expr (EXPR *e);
extern void print_type (TYPE *t);
extern void print_formallist (DECLLIST *dl);
extern void print_formal (FORMAL *f);
extern void print_caselist (CASELIST *cl);
extern void print_labellist (EXPRLIST *el);
extern void print_bindlist (BINDLIST *bl);
extern void print_fieldlist (FIELDLIST *fl);
extern void print_exprlist (EXPRLIST *el);
extern void print_offset (int offset);
extern void print_field (FIELD *f);
extern void print_ast (PROGRAM *p, char *treename);
extern void print_value (VALUE *v);
extern void print_obj (OBJECT *o);
