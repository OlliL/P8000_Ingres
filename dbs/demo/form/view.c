char		*m_erfind;
char		*m_lieferung;
char		*m_personal;
char		*m_teile;

f_erfind(frame)
register char		*frame;
{
   if (MMshell(m_erfind, 0, 0, "./v_erfind"))
	MMerror(" v_erfind nicht ausfuehrbar ");
}

f_lieferung(frame)
register char		*frame;
{
   if (MMshell(m_lieferung, 0, 0, "./v_lieferung"))
	MMerror(" v_lieferung nicht ausfuehrbar ");
}

f_personal(frame)
register char		*frame;
{
   if (MMshell(m_personal, 0, 0, "./v_personal"))
	MMerror(" v_personal nicht ausfuehrbar ");
}

f_teile(frame)
register char		*frame;
{
   if (MMshell(m_teile, 0, 0, "./v_teile"))
	MMerror(" v_teile nicht ausfuehrbar ");
}

main()
{
	register char		*form;
	char			*frame;
	extern char		*MMalloc();

   MMinit_form(1);

   frame = (char *) 0;
   form = MMalloc(&frame, 2, 1, 71, (char *) 0);
   MMout_field(form, "----------------------------------------------------- A N S I C H T E N");

   m_erfind = form = MMalloc(&frame, 8, 5, 11, (char *) 0);
   MMmen_field(form, f_erfind, (int (*)()) 0, " ERFIND");

   m_lieferung = form = MMalloc(&frame, 10, 5, 11, (char *) 0);
   MMmen_field(form, f_lieferung, (int (*)()) 0, " LIEFERUNG");

   m_personal = form = MMalloc(&frame, 12, 5, 11, (char *) 0);
   MMmen_field(form, f_personal, (int (*)()) 0, " PERSONAL");

   m_teile = form = MMalloc(&frame, 14, 5, 11, (char *) 0);
   MMmen_field(form, f_teile, (int (*)()) 0, " TEILE");

   MMform(frame);

   MMfree(&frame);
   MMexit_form(1);
   return (0);
}
