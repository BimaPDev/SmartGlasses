/* FUN_1404f274 @ 0x1404f274 */

int FUN_1404f274(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int local_18;
  int local_14;
  
  local_14 = *DAT_1404f340;
  iVar2 = FUN_1404a1b4(0,param_2,param_3,0);
  iVar2 = FUN_140982f4(*(undefined4 *)(iVar2 + 0xd4));
  if (iVar2 == 0) {
    uVar6 = FUN_1404a1b4();
    if (*DAT_1404f340 == local_14) {
      iVar2 = FUN_14098188(*(undefined4 *)((int)uVar6 + 0xd4),(int)((ulonglong)uVar6 >> 0x20),0,0);
      return iVar2;
    }
  }
  else {
    iVar2 = FUN_140959dc();
    iVar3 = FUN_1404a1b4(0);
    iVar5 = *(int *)(iVar3 + 0xd4);
    iVar3 = FUN_14098188(iVar5);
    if ((iVar3 == 4) && (iVar2 == 0)) {
      uVar1 = FUN_140280f4();
      uVar1 = uVar1 & 0xff;
      local_18 = iVar2;
      iVar2 = FUN_1404a1b4(0);
      if ((iVar2 != 0) && (iVar2 = FUN_140a1718(iVar2,&local_18), iVar2 == 0)) {
        uVar1 = (ushort)*(byte *)(local_18 + 0x113);
      }
      uVar4 = 0;
      if (uVar1 != 0) {
        if (uVar1 < 0xf) {
          uVar4 = ((uint)((ulonglong)DAT_1404f344 * (ulonglong)((short)uVar1 * 0xf + 7) >> 0x20) &
                  0x7ff) >> 3;
        }
        else {
          uVar4 = 0xf;
        }
      }
      if (*DAT_1404f340 == local_14) {
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1402b0f8(DAT_14097e54,DAT_14097e50,0xc9);
        }
        FUN_140755e4();
        iVar2 = FUN_14081a04(iVar5,uVar4);
        FUN_1407561c();
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = 2;
        }
        return iVar2;
      }
    }
    else if (*DAT_1404f340 == local_14) {
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

