/* FUN_1405c424 @ 0x1405c424 */

void FUN_1405c424(uint param_1)

{
  ushort uVar1;
  int iVar2;
  int unaff_r6;
  undefined4 local_28;
  undefined4 uStack_24;
  short local_20;
  short local_1e;
  short local_1c;
  undefined1 uStack_1a;
  undefined1 local_19;
  undefined1 local_18;
  int local_14;
  
  if (param_1 < 2) {
    iVar2 = *(int *)(DAT_1405c4c4 + param_1 * 4);
    unaff_r6 = DAT_1405c4c4;
  }
  else {
    iVar2 = 0;
  }
  local_14 = *DAT_1405c4c8;
  uVar1 = *(ushort *)(iVar2 + 0x3a);
  if (1 < param_1) {
    unaff_r6 = DAT_1405c4c4;
  }
  *(ushort *)(iVar2 + 0x3a) = uVar1 | 0x20;
  if ((*(int *)(*(int *)(unaff_r6 + 0xc) + 4) != 0) &&
     (((int)((uint)uVar1 << 0x1d) < 0 || (*(char *)(unaff_r6 + 0x50) < '\0')))) {
    local_20 = *(short *)(iVar2 + 0x34);
    local_1e = (ushort)*(byte *)(iVar2 + 0x36) + local_20;
    local_1c = 0;
    if (*(byte *)(iVar2 + 0x37) != 0) {
      local_1c = (ushort)*(byte *)(iVar2 + 0x37) + local_20;
    }
    local_18 = *(undefined1 *)(iVar2 + 0x38);
    local_28 = *(undefined4 *)(iVar2 + 0x2c);
    uStack_24 = *(undefined4 *)(iVar2 + 0x30);
    local_19 = *(undefined1 *)(iVar2 + 0x39);
    FUN_1405bf18(param_1,&uStack_1a);
    (**(code **)(*(int *)(unaff_r6 + 0xc) + 4))(param_1,*(undefined4 *)(iVar2 + 0x3c),&local_28);
  }
  if (*DAT_1405c4c8 != local_14) {
                    /* WARNING: Subroutine does not return */
    FUN_14039adc();
  }
  return;
}

