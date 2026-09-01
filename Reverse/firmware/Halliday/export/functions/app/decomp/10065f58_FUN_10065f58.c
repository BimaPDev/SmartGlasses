/* FUN_10065f58 @ 0x10065f58 */

int FUN_10065f58(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = DAT_10066004;
  iVar6 = DAT_10066004 + 8;
LAB_10065f62:
  do {
    if ((int)((uint)*(byte *)(param_1 + 0xf0) << 0x1f) < 0) {
      return 0;
    }
    do {
      do {
        if ((int)((uint)*(byte *)(param_1 + 0xf0) << 0x1f) < 0) {
LAB_10065f72:
          bVar4 = 0;
          goto LAB_10065f76;
        }
        iVar3 = FUN_1011df34(param_1);
      } while (iVar3 != 0xff);
      do {
        if ((int)((uint)*(byte *)(param_1 + 0xf0) << 0x1f) < 0) goto LAB_10065f72;
        iVar3 = FUN_1011df34(param_1);
        bVar4 = (byte)iVar3;
      } while (iVar3 == 0xff);
    } while (iVar3 == 0);
LAB_10065f76:
    uVar5 = (uint)bVar4;
    if (uVar5 < 0xcc) {
      if ((200 < uVar5) || (uVar5 - 0xc1 < 3)) {
        return -5;
      }
    }
    else if (uVar5 == 0xd8) goto LAB_10065f62;
    iVar3 = iVar1;
    if ((((uVar5 == 0xc0) || (iVar3 = iVar6, uVar5 == 0xe1)) ||
        (iVar3 = DAT_10066008, uVar5 == 0xc4)) ||
       ((iVar3 = DAT_1006600c, uVar5 == 0xdb || (iVar3 = DAT_10066010, uVar5 == 0xda)))) {
      cVar2 = (**(code **)(iVar3 + 4))(param_1);
      if (cVar2 != 0) {
        return (int)cVar2;
      }
      if (*(int *)(param_1 + 0xc) != 0) {
        return 0;
      }
    }
    else {
      iVar3 = FUN_1011df5e(param_1);
      FUN_1011dfde(param_1,iVar3 + -2);
    }
    if (uVar5 == 0xda) {
      return 0;
    }
  } while( true );
}

