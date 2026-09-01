/* FUN_100b9380 @ 0x100b9380 */

undefined4 FUN_100b9380(void)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = DAT_100b93b8;
  uVar4 = DAT_100b93b8[1];
  uVar5 = DAT_100b93b8[2];
  pcVar3 = (char *)(*DAT_100b93b8 + (uVar4 - 1));
  while( true ) {
    uVar1 = uVar4 & 3;
    uVar4 = uVar4 + 1;
    if (uVar1 == 0) {
      return 1;
    }
    if (uVar5 < uVar4) break;
    piVar2[1] = uVar4;
    pcVar3 = pcVar3 + 1;
    if (*pcVar3 != '\0') {
      return 0;
    }
  }
  return 0;
}

