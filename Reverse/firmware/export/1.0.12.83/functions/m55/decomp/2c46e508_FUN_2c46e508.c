/* FUN_2c46e508 @ 0x2c46e508 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46e508(void)

{
  char *pcVar1;
  char *pcVar2;
  char cStack_1b5;
  char acStack_1b4 [400];
  undefined4 uStack_24;
  
  uStack_24 = *_LAB_2c46e720;
  pcVar2 = &cStack_1b5;
  acStack_1b4[0] = '\0';
  acStack_1b4[1] = '\0';
  acStack_1b4[2] = '\0';
  acStack_1b4[3] = '\0';
  FUN_2c674268(acStack_1b4 + 4,0,0xc4,0);
  do {
    pcVar1 = pcVar2 + (1 - (int)acStack_1b4);
    pcVar2 = pcVar2 + 1;
    *pcVar2 = (char)pcVar1 + (char)(uint)((ulonglong)_LAB_2c46e724 * ZEXT48(pcVar1) >> 0x24) * -0x32
    ;
  } while (pcVar2 != acStack_1b4 + 199);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x39,_LAB_2c46e730,_LAB_2c46e734,_LAB_2c46e728,_LAB_2c46e72c);
}

