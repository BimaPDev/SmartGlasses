/* FUN_14032660 @ 0x14032660 */

void FUN_14032660(void)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 in_r3;
  
  if (*DAT_14032698 != '\0') {
    FUN_140313b0(DAT_1403269c,4);
    FUN_140e5398(0x15e0,extraout_r1,extraout_r2,in_r3);
    return;
  }
  FUN_1403666c(DAT_1403269c,4);
  FUN_140e5398(800);
  FUN_140e5398(0x15e0,extraout_r1_00,extraout_r2_00,in_r3);
  return;
}

