/* FUN_1005e890 @ 0x1005e890 */

void FUN_1005e890(void)

{
  byte *pbVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = ((int)PTR_DAT_1005e990 - (int)PTR_DAT_1005e98c) * 0x20 & 0xff00;
  FUN_100a5b78(uVar3 | 0x3e40031,PTR_s__panel_pm_resume_handler_1005e998,
               PTR_s_panel_resuming_1005e994);
  FUN_1005741c(1,6);
  piVar2 = DAT_1005e99c;
  pbVar1 = (byte *)(DAT_1005e99c + 199);
  *(undefined1 *)((int)DAT_1005e99c + 0x31e) = 0;
  *(byte *)(piVar2 + 199) = *pbVar1 & 0xfe;
  iVar4 = *piVar2;
  piVar2[0xc6] = 0;
  (**(code **)(*(int *)(piVar2[1] + 8) + 4))(piVar2[1],iVar4);
  (**(code **)(*(int *)(piVar2[1] + 8) + 0xc))(piVar2[1],iVar4 + 0x20);
  FUN_1005e230(piVar2[8],0x1b,1);
  FUN_100a5b78(uVar3 | 0xb10031,PTR_s__panel_power_on_1005e9a4,PTR_s__panel_power_on__d_1005e9a0,
               0xb1);
  if (**(int **)(iVar4 + 0x3c) != 0) {
    FUN_100a5b78(uVar3 | 0xb40031,PTR_s__panel_power_on_1005e9a4,PTR_s__panel_power_on__d_1005e9a0,
                 0xb4);
    iVar4 = (*(code *)**(undefined4 **)(iVar4 + 0x3c))(PTR_PTR_1005e9a8);
    FUN_100a5b78(uVar3 | 0xb70031,PTR_s__panel_power_on_1005e9a4,PTR_s__panel_power_on__d_1005e9a0,
                 0xb7);
    piVar2[0xd5] = iVar4;
    if (iVar4 < 0) {
      FUN_100a5b78(uVar3 | 0xbb0011,PTR_s__panel_power_on_1005e9a4,PTR_s_panel_init_failed_1005e9ac)
      ;
    }
  }
  FUN_100a5b78(uVar3 | 0xbe0031,PTR_s__panel_power_on_1005e9a4,PTR_s__panel_power_on__d_1005e9a0,
               0xbe);
  FUN_1005e4e0(PTR_PTR_1005e9a8);
  FUN_1011bc56(piVar2[2],6);
  FUN_1011bc46(DAT_1005e99c);
  FUN_100574c8(1,6);
  FUN_100a5b78(DAT_1005e9b0 | uVar3,PTR_s__panel_pm_resume_handler_1005e998,DAT_1005e9b4);
  return;
}

