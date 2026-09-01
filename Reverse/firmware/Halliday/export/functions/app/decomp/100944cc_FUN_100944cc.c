/* FUN_100944cc @ 0x100944cc */

void FUN_100944cc(undefined4 *param_1,undefined4 param_2)

{
  if (*(short *)(param_1 + 1) == -1) {
    FUN_10094174(3,DAT_10094514,0xaa,DAT_10094510,DAT_1009450c);
    return;
  }
  if (1 < *(byte *)((int)param_1 + 7)) {
    FUN_10094268(*param_1,DAT_10094510,*(short *)(param_1 + 1),*(byte *)((int)param_1 + 7),param_1,
                 param_2);
  }
  FUN_1011ea48(param_1,0,8);
  return;
}

