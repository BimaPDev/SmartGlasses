/* FUN_100167c0 @ 0x100167c0 */

void FUN_100167c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar4 = *DAT_10016864;
  iVar6 = param_1;
  iVar1 = FUN_101165e0();
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_10116598(param_1,param_2);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  uVar5 = CONCAT44(param_2,uVar2);
  if (-1 < (int)((uint)*(byte *)(param_1 + 0x49) << 0x1f)) goto LAB_100167fc;
LAB_100167ee:
  do {
    while( true ) {
      while( true ) {
        uVar3 = *DAT_10016864 ^ uVar4;
        if (uVar3 == 0) {
          FUN_10116500(param_1,500);
          return;
        }
        uVar5 = FUN_1013cdc0((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar3,uVar4,iVar6,param_2,
                             param_3);
LAB_100167fc:
        iVar1 = *(int *)(param_1 + 0x44);
        if (iVar1 != 2) break;
        uVar5 = FUN_10016530(param_1);
      }
      if (iVar1 != 4) break;
LAB_1001680e:
      uVar5 = FUN_10016570(param_1);
    }
    if (iVar1 == 8) {
LAB_1001681a:
      uVar5 = FUN_100165b4(param_1);
      goto LAB_100167ee;
    }
    if (iVar1 == 0x10) goto LAB_1001680e;
    if (iVar1 == 0x20) goto LAB_1001681a;
    if (iVar1 == 0x40) {
      uVar5 = FUN_100165f8(param_1);
    }
    else if (iVar1 == 0x80) {
      uVar5 = FUN_10016648(param_1);
    }
    else if (iVar1 == 0x100) {
      uVar5 = FUN_10016690(param_1);
    }
  } while( true );
}

