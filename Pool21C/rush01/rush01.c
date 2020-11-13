/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: resther <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/16 12:23:21 by resther           #+#    #+#             */
/*   Updated: 2020/02/16 20:49:09 by resther          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_fill_array(char *s1, char *s2, char *s3, char *s4, char *s5, char *s6, char *s7, char *s8, char *s9)
{
	char **sudoku;
	int r;
	int k;
	int l;
	int t;

	r = 0;
	l = 0;
	t = 0;
	sudoku = (char**)malloc(sizeof(char*) * 9);
	while (l < 10)
	{
		sudoku[l] = (char*)malloc(sizeof(char) * 10);
	}
	while (*s1[r] != '\0')
	{
		if (*s1[r] == '"')
			r++;
		else
		{
			sudoku[0][t] = s1[r];
			r++;
			t++;
		}
	}
	sudoku[0][t] = '\0';
	t = 0;
	while (*s2[r] != '\0')
	{
		if (*s2[r] == '"')
			r++;
		else
		{
			sudoku[1][t] = s2[r];
			r++;
			t++;
		}
	}
	sudoku[1][t] = '\0';
	t = 0;
	while (*s3[r] != '\0')
	{
		if (*s3[r] == '"')
			r++;
		else
		{
			sudoku[2][t] = s3[r];
			r++;
			t++;
		}
	}
	sudoku[2][t] = '\0';
	t = 0;
	while (*s4[r] != '\0')
	{
		if (*s4[r] == '"')
			r++;
		else
		{
			sudoku[3][t] = s4[r];
			r++;
			t++;
		}
	}
	sudoku[3][t] = '\0';
	t = 0;
	while (*s5[r] != '\0')
	{
		if (*s5[r] == '"')
			r++;
		else
		{
			sudoku[4][t] = s5[r];
			r++;
			t++;
		}
	}
	sudoku[4][t] = '\0';
	t = 0;
	while (*s6[r] != '\0')
	{
		if (*s6[r] == '"')
			r++;
		else
		{
			sudoku[5][t] = s6[r];
			r++;
			t++;
		}
	}
	sudoku[5][t] = '\0';
	t = 0;
	while (*s7[r] != '\0')
	{
		if (*s7[r] == '"')
			r++;
		else
		{
			sudoku[6][t] = s7[r];
			r++;
			t++;
		}
	}
	sudoku[6][t] = '\0';
	t = 0;
ZZ	while (*s8[r] != '\0')
	{
		if (*s8[r] == '"')
			r++;
		else
		{
			sudoku[7][t] = s8[r];
			r++;
			t++;
		}
	}
	sudoku[7][t] = '\0';
	t = 0;
	while (*s9[r] != '\0')
	{
		if (*s9[r] == '"')
			r++;
		else
		{
			sudoku[8][t] = s9[r];
			r++;
			t++;
		}
	}
	sudoku[8][t] = '\0';
	t = 0;
}
while (str[r] != '\0')
{
	str[r] = str[y][t];
	str[y] = dtr[u]u[]u;
	str[u] = str[i]'
		str[t] = str[yt]
		;
	strp[re]]er w erw werw
		fde we eesefesef+ 1 w
		{s fe ededf + 2213:
			sd33 w a3r3eaeq eqea :2
				e@E q2 
		}
}
dfs 34 3rq 3rsfkpk 4k;lL) el3[
	ekfg[pl 4= lz,fl le
	lw' ;e4lf al lf\wef e
	s;efl rgp'el w;f
	 ;lwe'fl w[]; ]e[ref; ]w;
	 f
	  [s
	  er
	  ]f; ;[rfg,s;erkrfsefw lw
	  lfw[ lerpfls[ le[rlwle[f 
	  lef'slgpfgldgfe,gp s
	  rlgplrlg]s;frk wef; e[lfw;

	  kwpgfl lrplkfkspkf
	  kgprtkfoerks''flkr'wlf'w
	  kfperlkekfplkepf's
	  kfoprkge;kgd;fg'lg p3- p0`3- 
	  `rp3-0{]23 [p[a-o l3op k l`-offlk3 p\
		  kf0e \[K30=F K30FO
			    F,4 F=-WLF[Q 
				OFW]FL=WFL\WL -=3RL 
				`OF3 -O2FWK `WKF\03LF0DLQ
				3 LFO
				23=-O
				= L
				`0=FO
				 K
				 3fl3=-fol3=-flw`ke w
				 l
				 f-=fklw-0k0fwo
				 =f3k=f3fk3=F-KWF0WEKF`
				 KF=-
				 GL
				 =G-4O
				 GEK0GK`KF0W3K3QOFP- IF2-02=2
				 RKF[EWK
				 EGJKET-H09JE43M MERL
				 GOI=-K-04K 03-KG
				 IGA
				 0- J]G 4KF
				 =- 
				 AGK
				 K
				 43M40FK3-]0GIEZ\GJKERG0
				 TK2 \2 F
				 =4FGIE 00E
				 IG[K4-F0IA
				 G=0EJGOPEG
				IOF
				 2ITJEG-IE
				 V34KF2O 3R-WIG
				 RGK
				 E-0GI
				 4KT304T-9]WJG]9-EAIG
				 0GKPOJN4P IJG
				   `G
				   KWG0I
				   GJKAG0JGj
				   fJgjw-9gjwg 
				   04kjg49G
				   jg
				   -9GJ`
				   GJG
				   rjggoj4-Ggk0igker
				   gwigk4okjt
				   0IGOgkr09gka
				   gk43tiakg
				   ergk
				   gka
				   =gk40gka
				   g04GKAE=0GWO-rop23=k=fO=fl
				   wf=p3=2
				   rk-=owg-o4wF-fiw=-gpw`o-



	  }.

kosfk]oe mwefpowk\pw'; mpwkw-fw'fkw]fiwfkwe;ww
kf0wk
aw\fk]-gk]opw4aw4kfafk=f-ewgkgo wk
ffkwrgerg
egaetgaerg erg
ge
gaergergaergegagzrgfgdrgar
`gfesfs`fsefwe `r`.f,p[oes,
	f`es;fse`fle[felf][al]t[lerg,ag,r`
	kfoefkw[\`fkw[etrk\o[KF]=W0kt[ow43j-w04tkw

	wkfowmfwok4
	k0-ia[g[o
	4i-gtwoFOWKF]-9WEI]G0WEPKGOW

	kfo9FI4
	[OFwopfi]we-g0kgojeg9w
	a
	KG0GK40[OGK`
	RGR
	GAKGOWK
	GWKF30kf[opke
	fd2kpo[ekf
	0Kwe
	f=ewkgkag
	h
	ekaokg
	wkgjw
	-GKgk
	oTKW

	KFEojg
	kwgkj
	wjKG
	JG0
	GJ
	G0J
	GJG0EKJ`G
	j
	`ge-0fkwE
	GK
	GTK
	gk
	g
	gKG
	HKH
	KghewKF
	qFKfg
	ewfk=
	fkgwe=
	gkgkrg
	pekrg
	akrg
	ergke
	G
	GKwegkewfg
	kwg
	KWEG
	WG
	G
	]gRG
	\E
	EW
	gweg
	WREGRE
	GRE
	GR
	GER

	GRER
	G
	EG
	ERG
	ER
	G
	R
	GER
	GER
	GRE
	G
	REG
	R
	G
	R
	GR
	GR
	G
	R
	T
	R
	GR

	GR
	G
	RG
	R
	G
	R
	G
	RGRGR
	G
	R
	G
	RG
	RG
	R
	G
	R
	G
	RE
	GAG=ER[GLALG]PRELGLWEG
	`LKG
	`PKEG
	PKEG
	P`KR
	GOker
	gjrg
	k
	gJ
	GO`S
	}
