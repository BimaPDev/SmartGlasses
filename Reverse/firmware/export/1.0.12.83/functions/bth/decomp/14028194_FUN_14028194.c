/* FUN_14028194 @ 0x14028194 */

void FUN_14028194(uint param_1)

{
  uint uVar1;
  uint uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar2 = 1 << (param_1 & 0xff);
  uVar1 = *(uint *)(DAT_140281f8 + 0xc) & uVar2 & 0xff;
  if ((*(uint *)(DAT_140281f8 + 4) & uVar2 & 0xff) == 0) {
    if (uVar1 == 0) {
      return;
    }
  }
  else {
    *(uint *)(DAT_140281f8 + 8) = uVar2 & 0xff;
    if (uVar1 == 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(DAT_140281fc + param_1 * 4);
      goto joined_r0x140281ee;
    }
  }
  *(uint *)(DAT_140281f8 + 0x10) = uVar2 & 0xff;
  UNRECOVERED_JUMPTABLE = *(code **)(DAT_140281fc + param_1 * 4);
joined_r0x140281ee:
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x140281dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,*(uint *)(param_1 * 0x20 + 0x4013010c) & 0xfff,uVar1 != 0,
             *(undefined4 *)(param_1 * 0x20 + 0x40130108));
  return;
}

