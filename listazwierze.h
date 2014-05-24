bool PustaLista ( struct animal * glowny){
	if (glowny==NULL)
		return true;
	else 
		return false;

}

int IleElementow ( struct animal * glowny){

	if (glowny == NULL)
		return 0;
	else if{
		int licznik =0;
		glowny=biezacy;
		while ( biezacy->nast=NULL)
		{
			licznik++;
			biezacy=biezacy->nast;
		}
	printf ( "Twoja lista ma: %d elementow", licznik);
	return licznik;
			

		}	



}
