/* FUN_14067590 @ 0x14067590 */

int FUN_14067590(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  undefined1 local_19;
  int local_18;
  int local_14;
  
  local_14 = *DAT_14067620;
  local_19 = 0xff;
  uVar2 = FUN_14066130(param_1,param_2,0);
  if (((uVar2 < 0x18) || (iVar4 = FUN_14069164(param_1,&local_19), iVar4 == 0)) ||
     (bVar1 = *(byte *)(*(int *)(DAT_14067624 + (param_1 + 0x22) * 4) + 0x54), bVar3 = bVar1 & 0xc,
     (bVar1 & 0xc) != 0)) {
    iVar4 = 0x43;
  }
  else {
    iVar4 = FUN_1406cc4c(param_1,param_2,bVar3,bVar3,0x17,0x24,DAT_14067628,&local_18);
    if (iVar4 == 0) {
      *(undefined1 *)(local_18 + 0x10) = local_19;
      *(short *)(local_18 + 0x20) = (short)uVar2;
      FUN_1406cdd0(param_1);
    }
  }
  if (*DAT_14067620 == local_14) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14039adc();
}

