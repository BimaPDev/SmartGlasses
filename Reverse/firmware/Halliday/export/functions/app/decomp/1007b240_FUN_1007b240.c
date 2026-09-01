/* FUN_1007b240 @ 0x1007b240 */

undefined4 FUN_1007b240(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_1007b2e0;
  switch(param_2) {
  case 0:
    if ((int)((uint)*(byte *)(DAT_1007b2e0 + 0x13d) << 0x1f) < 0) {
      if ((*(byte *)(DAT_1007b2e0 + 0x13d) & 2) == 0) {
        cVar1 = *(char *)(DAT_1007b2e0 + 0x141);
        if ((cVar1 == '\x02') || (cVar1 == '\x04')) {
          iVar3 = 3;
        }
        else if (cVar1 == '\x05') {
          iVar3 = 4;
        }
        else {
          iVar2 = FUN_1011a86a();
          if (iVar2 == 0) {
            *param_3 = 2;
            return 0;
          }
          if (-1 < (int)((uint)*(byte *)(iVar3 + 0x13e) << 0x1b)) goto LAB_1007b2c8;
          iVar3 = 10;
        }
      }
      else {
        iVar3 = 9;
      }
      goto LAB_1007b26a;
    }
    break;
  case 1:
    break;
  case 2:
    iVar3 = (uint)*(ushort *)(DAT_1007b2e0 + 0x15e) * 1000;
    goto LAB_1007b26a;
  case 3:
    iVar3 = FUN_1007a694();
    goto LAB_1007b2b2;
  case 4:
    iVar3 = FUN_1011a86a();
    if ((*(char *)(DAT_1007b2e0 + 0x13f) == '\0') && (iVar3 == 0)) {
LAB_1007b2c8:
      *param_3 = 0;
      return 0;
    }
    break;
  default:
    return 0xffffffea;
  case 6:
    FUN_1007b1a4();
    iVar3 = FUN_1011fea2();
LAB_1007b2b2:
    *param_3 = iVar3;
    return 0;
  }
  iVar3 = 1;
LAB_1007b26a:
  *param_3 = iVar3;
  return 0;
}

