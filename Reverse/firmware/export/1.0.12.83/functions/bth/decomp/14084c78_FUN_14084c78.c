/* FUN_14084c78 @ 0x14084c78 */

void FUN_14084c78(int param_1,int param_2,uint param_3,undefined4 param_4,char param_5)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int local_48;
  int local_40 [7];
  
  local_40[5] = *DAT_14084d78;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  if ((param_1 == 0) ||
     (local_40[0] = param_1, FUN_1408ad10(1,DAT_14084d7c,local_40), iVar1 = local_40[4],
     local_40[4] == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14084d84,param_1);
  }
  if (*(char *)(*(int *)(local_40[4] + 8) + 5) != '\x04') {
                    /* WARNING: Subroutine does not return */
    FUN_1402a64c(0x41,DAT_14084d80);
  }
  local_48 = param_2;
  if (param_3 == 0) {
    uVar4 = CONCAT44(extraout_r1,1);
  }
  else {
    do {
      uVar3 = (uint)*(ushort *)(iVar1 + 0x1c);
      if (param_3 <= *(ushort *)(iVar1 + 0x1c)) {
        uVar3 = param_3;
      }
      while( true ) {
        uVar5 = 0xbc3;
        iVar2 = FUN_14084c28(*(undefined4 *)(iVar1 + 0x20),uVar3 & 0xffff,param_4);
        if (iVar2 != 0) break;
        FUN_140e5818(2);
      }
      if (param_5 != '\0') {
        *(byte *)(iVar2 + 4) = *(byte *)(iVar2 + 4) | 0x80;
      }
      FUN_14075468(iVar2,local_48,uVar3 & 0xffff,param_5,uVar5);
      param_3 = param_3 - uVar3;
      local_48 = local_48 + uVar3;
      *(byte *)(iVar2 + 5) = *(byte *)(iVar2 + 5) & 0xfe | param_3 != 0;
      while ((uVar4 = FUN_140825e8(iVar1,iVar2), (int)uVar4 != 0 &&
             (*(ushort *)(iVar1 + 0x1c) == uVar3))) {
        FUN_140e5818(2);
      }
    } while (param_3 != 0);
  }
  if ((*DAT_14084d78 ^ local_40[5]) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),*DAT_14084d78 ^ local_40[5],0);
  }
  return;
}

