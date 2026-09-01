/* FUN_100be32c @ 0x100be32c */

undefined4 FUN_100be32c(int param_1,int param_2)

{
  FUN_100a5b78(DAT_100be37c | (DAT_100be378 - DAT_100be374) * 0x20 & 0xff00U,DAT_100be384,
               DAT_100be380,param_1,param_2,param_2);
  if (param_1 == 0) {
    FUN_10061f54(DAT_100be388);
  }
  else {
    FUN_10061c80(DAT_100be388,param_2 * 1000);
    FUN_1005700c(5);
  }
  return 0;
}

