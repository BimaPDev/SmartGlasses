/* FUN_2c629e10 @ 0x2c629e10 */

int FUN_2c629e10(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = DAT_2c629e30;
  iVar2 = *DAT_2c629e2c;
  do {
    *pcVar1 = '\x01';
  } while (*pcVar1 == '\0');
  return iVar2 - param_1;
}

