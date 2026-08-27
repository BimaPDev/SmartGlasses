/* FUN_140022ac @ 0x140022ac */

undefined4 FUN_140022ac(int param_1,int param_2,int param_3)

{
  if ((param_2 == 0) || (param_3 == 0)) {
    FUN_1400175c(param_1);
    if (*(int *)(DAT_14002300 + param_1 * 4) << 0x13 < 0) {
      FUN_14001554(param_1);
      FUN_14001520(param_1,*(undefined1 *)
                            (*(int *)(DAT_1400230c + (uint)*(byte *)(DAT_14002308 + param_1) * 4) +
                            5));
      FUN_1400175c(param_1);
    }
    FUN_14001720(param_1);
    FUN_14001c60(param_1);
  }
  FUN_14001a7c(param_1,*(undefined4 *)(DAT_14002304 + param_1 * 4));
  return 0;
}

