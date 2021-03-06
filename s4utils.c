#include <stdio.h>
#include <stdlib.h>

// S4 Utils v0.2
// by broodplank


// UV and OV
void uv25()
{
     printf("\nLowering CPU VDD Voltage by 25mV\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo -25000 > /sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels'");
     system(buf);

}

void ov25()
{
     printf("\nIncreasing CPU VDD Voltage by 25mV\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo +25000 > /sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels'");
     system(buf);

}

void uv50()
{
     printf("\nLowering CPU VDD Voltage by 50mV\n");
    char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo -50000 > /sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels'");
     system(buf);

}

void ov50()
{
     printf("\nIncreasing CPU VDD Voltage by 50mV\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo +50000 > /sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels'");
     system(buf);

}

void uv75()
{
     printf("\nLowering CPU VDD Voltage by 75mV\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo -75000 > /sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels'");
     system(buf);

}

void ov75()
{
     printf("\nIncreasing CPU VDD Voltage by 75mV\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo +75000 > /sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels'");
     system(buf);

}

void uv100()
{
     printf("\nLowering CPU VDD Voltage by 100mV\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo -100000 > /sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels'");
     system(buf);

}

void ov100()
{
     printf("\nIncreasing CPU VDD Voltage by 100mV\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo +100000 > /sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels'");
     system(buf);

}


// ReadAhead Cache size of internal and external sdcard
void raint256()
{
     printf("\nChanging Read Ahead Cache size for Internal sdcard to 256kb\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo 256 > /sys/block/mmcblk0/queue/read_ahead_kb'");
     system(buf);

}

void raext256()
{
     printf("\nChanging Read Ahead Cache size for External sdcard to 256kb\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo 256 > /sys/block/mmcblk1/queue/read_ahead_kb'");
     system(buf);

}

void raint512()
{
     printf("\nChanging Read Ahead Cache size for Internal sdcard to 512kb\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo 512 > /sys/block/mmcblk0/queue/read_ahead_kb'");
     system(buf);

}

void raext512()
{
     printf("\nChanging Read Ahead Cache size for External sdcard to 512kb\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo 512 > /sys/block/mmcblk1/queue/read_ahead_kb'");
     system(buf);

}

void raint1024()
{
     printf("\nChanging Read Ahead Cache size for Internal sdcard to 1024kb\n");
        char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo 1024 > /sys/block/mmcblk0/queue/read_ahead_kb'");
     system(buf);

}

void raext1024()
{
     printf("\nChanging Read Ahead Cache size for External sdcard to 1024kb\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo 1024 > /sys/block/mmcblk1/queue/read_ahead_kb'");
     system(buf);

}

void raint2048()
{
     printf("\nChanging Read Ahead Cache size for Internal sdcard to 2048kb\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo 2048 > /sys/block/mmcblk0/queue/read_ahead_kb'");
     system(buf);

}

void raext2048()
{
     printf("\nChanging Read Ahead Cache size for External sdcard to 2048kb\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo 2048 > /sys/block/mmcblk1/queue/read_ahead_kb'");
     system(buf);

}

void raint3072()
{
     printf("\nChanging Read Ahead Cache size for Internal sdcard to 3072kb\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo 3072 > /sys/block/mmcblk0/queue/read_ahead_kb'");
     system(buf);

}

void raext3072()
{
     printf("\nChanging Read Ahead Cache size for External sdcard to 3072kb\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo 3072 > /sys/block/mmcblk1/queue/read_ahead_kb'");
     system(buf);

}


void raint4096()
{
     printf("\nChanging Read Ahead Cache size for Internal sdcard to 4096kb\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo 4096 > /sys/block/mmcblk0/queue/read_ahead_kb'");
     system(buf);

}

void raext4096()
{
     printf("\nChanging Read Ahead Cache size for External sdcard to 4096kb\n");
     char buf[256];
     sprintf(buf, "/system/bin/sh -c %s", "'echo 4096 > /sys/block/mmcblk1/queue/read_ahead_kb'");
     system(buf);

}


// Flash boot / recovery

void fbimg()
{
    printf("Flashing '/sdcard/boot.img' to '/dev/block/platform/msm_sdcc.1/by-name/boot'");
    char buf[256];
    sprintf(buf, "/system/bin/sh -c %s", "'dd if=/sdcard/boot.img of=/dev/block/platform/msm_sdcc.1/by-name/boot'");
    system(buf);

}

void frimg()
{
    printf("Flashing '/sdcard/recovery.img' to '/dev/block/platform/msm_sdcc.1/by-name/recovery'");
    char buf[256];
    sprintf(buf, "/system/bin/sh -c %s", "'dd if=/sdcard/recovery.img of=/dev/block/platform/msm_sdcc.1/by-name/recovery'");
    system(buf);

}

// Check VDD Levels
void vddlevels()
{
    printf("\nCurrent Voltage Table:\n");
    int c;
    FILE *file;
    file = fopen("/sys/devices/system/cpu/cpufreq/vdd_table/vdd_levels", "r");
    if (file) {
       while ((c = getc(file)) != EOF)
       putchar(c);
    fclose(file);
    }
}

// Set CPU Governor
void setcpugovernor()
{
        printf("not implemented yet..."); 
}

// Check CPU Governor
void cpugovernor()
{
    printf("\nCurrent CPU Governor:\n");
    int c;
    FILE *file;
    file = fopen("/sys/devices/system/cpu/cpu0/cpufreq/scaling_governor", "r");
    if (file) {
       while ((c = getc(file)) != EOF)
       putchar(c);
    fclose(file);
    }

}

// Check available CPU Governors
void cpugovernors()
{
    printf("\nCurrent available CPU Governors:\n");
    int c;
    FILE *file;
    file = fopen("/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_governors", "r");
    if (file) {
       while ((c = getc(file)) != EOF)
       putchar(c);
    fclose(file);
    }
}

// Check available CPU Frequencies
void cpufreqs()
{
    printf("\nCurrent available CPU Frequencies:\n");
    int c;
    FILE *file;
    file = fopen("/sys/devices/system/cpu/cpu0/cpufreq/scaling_available_frequencies", "r");
    if (file) {
       while ((c = getc(file)) != EOF)
       putchar(c);
    fclose(file);
    }

}

// ReadAhead Internal
void readahead()
{
  printf( "Cache size of Internal SDCard:\n");
            int c2;
            FILE *file2;
            file2 = fopen("/sys/block/mmcblk0/queue/read_ahead_kb", "r");
            if (file2) {
               while ((c2 = getc(file2)) != EOF)
               putchar(c2);
          fclose(file2);
          }
}

// ReadAhead External
void readahead2()
{

 	    printf( "\nCache size of External SDCard:\n");
            int c1;
            FILE *file;
            file = fopen("/sys/block/mmcblk0/queue/read_ahead_kb", "r");
            if (file) {
               while ((c1 = getc(file)) != EOF)
               putchar(c1);
            fclose(file);
			}
  }



// Check I/O Scheduler
void iosched()
{
    printf("\nCurrent I/O Schedulder:\n");
    int c;
    FILE *file;
    file = fopen("/sys/block/mmcblk0/queue/scheduler", "r");
    if (file) {
       while ((c = getc(file)) != EOF)
       putchar(c);
    fclose(file);
    }
}



// Undervolt and Overvolt menu
void uvovmenu()
{
    for (;;)
     {
            printf( "\nUndervolt or Overvolt?\n\n");
    	    printf( " [1] Undervolt\n" );
	    printf( " [2] Overvolt\n" );
	    printf( " [3] Cancel\n");
            printf( "\nChoice: ");
            int uvorov;
            scanf ( "%d", &uvorov );
	   if ( uvorov==1) {
	            printf( "\nUndervolt CPU by how many mV?\n\n");
	            printf( " [1] 25mV\n" );
		    printf( " [2] 50mV\n" );
		    printf( " [3] 75mV\n" );
		    printf( " [4] 100mV\n\n" );
		    printf( " [0] Cancel\n" ); 
		    printf( "\nChoice: ");
		    int uvcount;
		    scanf ( "%d", &uvcount );
		    if ( uvcount == 1)
		       uv25();

		    if ( uvcount == 2)
		       uv50();

		    if ( uvcount == 3)
		       uv75();

		    if ( uvcount == 4)
		       uv100();

	            if ( uvcount == 0)
		       load_menu();
	   }

      else if ( uvorov==2) {

		    printf( "Overvolt by how many mV?\n\n");
	            printf( " [1] 25mV\n" );
		    printf( " [2] 50mV\n" );
		    printf( " [3] 75mV\n" );
		    printf( " [4] 100mV\n" );
		    printf( " [0] Cancel\n" ); 
		    printf( "\nChoice: ");
		    int ovcount;
		    scanf ( "%d", &ovcount );
		    if ( ovcount==1)
		       ov25();

		    if ( ovcount==2)
		       ov50();

		    if ( ovcount==3)
		       ov75();

		    if ( ovcount==4)
		       ov100();

		    if ( ovcount==0)
		       load_menu();

            }
      else if ( uvorov==3 ) {
            	break;
      }

   }

}


void readaheadint()
{
	 printf( "Cache size of Internal SDCard?\n\n");
	    	    printf( " [1] 256kb (default)\n" );
		    printf( " [2] 512kb\n" );
	            printf( " [3] 1024kb\n" );
	            printf( " [4] 2048kb\n" );
	            printf( " [5] 3072kb\n" );
	            printf( " [6] 4096kb\n" );
	            printf( " [0] Cancel\n" );
	            printf( "\nChoice: ");
	            int raint;
	            scanf ( "%d", &raint );
	            if ( raint==1)
	               raint256();
	            if ( raint==2)
	               raint512();

	            if ( raint==3)
	               raint1024();

	            if ( raint==4)
	               raint2048();

	            if ( raint==5)
	               raint3072();

	            if ( raint==6)
	               raint4096();

	            if ( raint==0)
	            	load_menu();

}

void readaheadext()
{
	        printf( "Cache size of External SDCard?\n\n");
	        printf( " [1] 256kb (default)\n" );
		printf( " [2] 512kb\n" );
		printf( " [3] 1024kb\n" );
		printf( " [4] 2048kb\n" );
		printf( " [5] 3072kb\n" );
		printf( " [6] 4096kb\n" );
		printf( " [0] Cancel\n" );
		printf( "\nChoice: ");
		int raext;
		scanf ( "%d", &raext );
		if ( raext==1)
		   raext256();
		if ( raext==2)
		   raext512();
		if ( raext==3)
		   raext1024();
		if ( raext==4)
		   raext2048();
		if ( raext==5)
		   raext3072();
		if ( raext==6)
		   raext4096();
		if ( raext==0)
			load_menu();

}

void setscheduler()
{

        printf("not implemented yet..."); 
//      iosched();
//	printf( "\nNew I/O Scheduler: ");
//      char newsched;
//      scanf ( "%s", &newsched );
//      printf("%s", newsched);
  
}

// CPU Gov / Min/Max Freq Menu
void cpumenu()
{
    for (;;)
     {
            printf( "What do you want to change?\n\n");
    	    printf( " [1] CPU Governor\n" );
	    printf( " [2] CPU Min Freq\n" );
            printf( " [3] CPU Max Freq\n" );
            printf( " [0] Exit\n");
            printf( "\nChoice: ");
            int cpuchoice;
            scanf ( "%d", &cpuchoice );
            if ( cpuchoice==1)
               cpugovernors();
            if ( cpuchoice==2)
               cpufreqs();
            if ( cpuchoice==3)
               cpufreqs();
            if ( cpuchoice==0)
            	break;
      }

}

// Readahead menu
void readaheadmenu()
{
    for (;;)
     {
            printf( "What do you want to change?\n\n");
    	    printf( " [1] Internal SDCard cache size\n" );
	    printf( " [2] External SDCard cache size\n" );
            printf( " [0] Noting\n" );
            printf( "\nChoice: ");
            int readaheadchoice;
            scanf ( "%d", &readaheadchoice );
            if ( readaheadchoice==1)
               readaheadint();
            if ( readaheadchoice==2)
                readaheadext();
            if ( readaheadchoice==0)
            	break;
      }

}



// Load menu
int main(int argc, char** argv)
{
load_menu();
return 0;
}

// Menu
void load_menu(void)
{
int choice;

do
{

		    printf( "\n - S4 Utils v0.2 (by broodplank)\n\n");
		    printf( "  ----[ CPU Settings ]----\n");
		    printf( " [1] Check current CPU frequency/voltage table and governor\n" );
		    printf( " [2] Undervolt / Overvolt CPU\n" );
		    printf( " [3] CPU Governor and Min/Max Freq\n\n" );
		    printf( " ----[ I/O Settings ]----\n");
		    printf( " [4] Check current readahead and I/O scheduler \n");
		    printf( " [5] Set Readahead for Internal/External SD\n");
		    printf( " [6] Set I/O Scheduler\n\n");
                    printf( " ----[ Install / Restore ]----\n");
		    printf( " [7] Make current settings persistent\n");
		    printf( " [8] Restore default settings\n\n");
		    printf("  ----[ Extra ]----\n");
		    printf( " [9] Fake Factory Reset\n\n");
		    printf( " [0] Exit\n\n");
		    printf( "Selection: " );
		    scanf( "%d", &choice );
		    switch (choice)
	             {
			case 1:
			    vddlevels();
			    printf("\n");
			    cpugovernor();
			    break;


			case 2:
			    uvovmenu();
			    break;

			case 3:
			    cpumenu();
			    break;

			case 4:
		 	    readahead();
			    printf("\n");
			    readahead2();
			    printf("\n");
			    iosched();
			    break;

			case 5:
                            readaheadmenu();
                            break;

			 case 6:
		            setscheduler();
			    break;

			case 7:
			    fbimg();
			    break;

			case 8:
			    frimg();
			    break;

			case 0:
			    break;

			default:
			    printf( "Bad input, quitting!\n" );
			    break;
	     }


  } while (choice != 0);
}

