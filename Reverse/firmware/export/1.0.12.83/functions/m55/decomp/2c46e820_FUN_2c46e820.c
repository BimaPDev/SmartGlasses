/* FUN_2c46e820 @ 0x2c46e820 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c46e820(void)

{
  char *pcVar1;
  char *pcVar2;
  char cStack_f5;
  char acStack_f4 [200];
  undefined4 uStack_2c;
  undefined1 auStack_28 [4];
  
  uStack_2c = *_LAB_2c46eafc;
  acStack_f4[0] = '\0';
  acStack_f4[1] = '\0';
  acStack_f4[2] = '\0';
  acStack_f4[3] = '\0';
  FUN_2c674268(acStack_f4 + 4,0,0xc4);
  pcVar1 = &cStack_f5;
  do {
    pcVar2 = pcVar1 + (0xcd - (int)auStack_28);
    pcVar1 = pcVar1 + 1;
    *pcVar1 = (char)pcVar2 + (char)(uint)((ulonglong)_LAB_2c46eb04 * ZEXT48(pcVar2) >> 0x24) * -0x14
    ;
  } while (acStack_f4 + 199 != pcVar1);
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x81,_LAB_2c46eb10,_LAB_2c46eb14,_LAB_2c46eb08,_LAB_2c46eb0c);
}

