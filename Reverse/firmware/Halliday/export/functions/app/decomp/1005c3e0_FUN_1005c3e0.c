/* FUN_1005c3e0 @ 0x1005c3e0 */

char * FUN_1005c3e0(char *param_1,undefined1 *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  
  iVar6 = 0;
  *param_2 = 0;
  *param_3 = 0xff;
  if (*param_1 == '/') {
    iVar2 = FUN_1011ea00(param_1 + 1,0x3a,param_3,0x2f,param_1,param_2,param_3);
    puVar7 = DAT_1005c44c;
    if (iVar2 != 0) {
      do {
        uVar5 = *puVar7;
        uVar3 = FUN_1011ea10(uVar5);
        iVar4 = FUN_1011ea20(param_1 + 1,uVar5,uVar3);
        if (iVar4 == 0) {
          *param_2 = (char)iVar6;
          bVar1 = *(char *)(iVar2 + 1) + 0xbf;
          if (0x19 < bVar1) {
            *param_3 = 0xff;
            return (char *)(iVar2 + 1);
          }
          *param_3 = bVar1;
          return (char *)(iVar2 + 3);
        }
        iVar6 = iVar6 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar6 != 5);
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}

