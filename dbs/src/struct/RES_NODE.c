# include	<stdio.h>
# include	"../conf/conf.h"
# include	"../h/ing_db.h"
# include	"../h/tree.h"

# define	off(x)		i = ((char *) x) - ((char *) d)
# define	out(arg)	printf("%4d %06o #%04x:\t%s\n", i, i, i, arg)

main()
{
	register RES_NODE		*d;
	register int			i;
	RES_NODE			desc;
	char				buf[BUFSIZ];

	setbuf(stdout, buf);
	printf("struct res_node   ==   RES_NODE [h/tree.h]\n");
	d = &desc;
	off(d->qt_hdr);
	out("qt_hdr (char [QT_HDR_SIZ])");
	off(&d->resno);
	out("resno (short)");
	fflush(stdout);
}
