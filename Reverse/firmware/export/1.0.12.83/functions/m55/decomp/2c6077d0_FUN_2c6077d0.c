/* FUN_2c6077d0 @ 0x2c6077d0 */

void FUN_2c6077d0(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 local_24;
  undefined4 local_20;
  uint local_1c;
  
  local_1c = *DAT_2c6078ec;
  iVar2 = FUN_2c604178();
  uVar3 = FUN_2c604188();
  iVar4 = FUN_2c5fee44();
  if ((((iVar2 == iVar4) || (iVar4 = FUN_2c5fee58(uVar3), iVar2 == iVar4)) ||
      (iVar4 = FUN_2c5fee6c(uVar3), iVar2 == iVar4)) ||
     ((iVar4 = FUN_2c5fee94(uVar3), iVar2 == iVar4 ||
      (uVar6 = FUN_2c5fee80(uVar3), uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20),
      iVar2 == (int)uVar6)))) {
    iVar2 = FUN_2c606ba4(param_1,0x80000);
    if (iVar2 == 0) {
      sVar1 = FUN_2c600c2c(param_1);
      local_20 = CONCAT22(*(short *)(param_1 + 0x1a) + sVar1,*(short *)(param_1 + 0x18) + sVar1);
      local_24 = CONCAT22(*(short *)(param_1 + 0x16) - sVar1,*(short *)(param_1 + 0x14) - sVar1);
      uVar6 = FUN_2c62a6b4(param_2,param_2,&local_24);
      uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 == 0) {
        uVar5 = 0;
        goto LAB_2c607820;
      }
    }
    FUN_2c6076c4(param_1,param_2,1,0);
    uVar6 = FUN_2c6041d4(param_1);
    uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
    iVar2 = (int)uVar6;
    if (iVar2 != 0) {
      do {
        uVar6 = FUN_2c606b94(iVar2,1);
        uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if ((int)uVar6 != 0) {
          uVar5 = 0;
          goto LAB_2c607820;
        }
        iVar4 = FUN_2c606ba4(iVar2,0x80000);
        if (iVar4 == 0) {
          local_24 = *(undefined4 *)(iVar2 + 0x14);
          local_20 = *(undefined4 *)(iVar2 + 0x18);
          FUN_2c6076c4(iVar2,&local_24,1,0);
          uVar6 = FUN_2c62a6b4(param_2,param_2,&local_24);
          uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uVar5 = 0;
          if ((int)uVar6 == 0) goto LAB_2c607820;
        }
        uVar6 = FUN_2c6041d4(iVar2);
        uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
        iVar2 = (int)uVar6;
      } while (iVar2 != 0);
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
LAB_2c607820:
  if ((*DAT_2c6078ec ^ local_1c) == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  stack_chk_fail(uVar5,uVar3,*DAT_2c6078ec ^ local_1c,0);
}

