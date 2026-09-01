/* FUN_10119c46 @ 0x10119c46 */

void FUN_10119c46(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = 4;
  cVar2 = '\0';
  uVar3 = 100;
  while( true ) {
    if (param_2 == 0) {
      return;
    }
    iVar5 = iVar5 + -1;
    if (iVar5 == 0) break;
    if (((uVar3 <= param_3) || (uVar3 == 1)) || (pcVar4 = param_1, cVar2 != '\0')) {
      pcVar4 = param_1 + 1;
      *param_1 = (char)(param_3 / uVar3) + '0';
      cVar2 = cVar2 + '\x01';
      param_2 = param_2 - 1 & 0xff;
    }
    iVar1 = uVar3 * (param_3 / uVar3);
    uVar3 = uVar3 / 10;
    param_3 = param_3 - iVar1 & 0xff;
    param_1 = pcVar4;
  }
  *param_1 = '\0';
  return;
}

