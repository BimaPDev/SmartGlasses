/* FUN_2c501e54 @ 0x2c501e54 */

int FUN_2c501e54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  char *pcVar2;
  undefined4 extraout_r2;
  
  FUN_2c63bbfc(0xb);
  pcVar2 = LAB_2c501ebc;
  FUN_2c4ffd94(*(undefined4 *)(param_1 + 0x16c));
  FUN_2c62be1c(*(undefined4 *)(param_1 + 0x28));
  FUN_2c62be1c(*(undefined4 *)(param_1 + 0x2c));
  cVar1 = *pcVar2;
  if (cVar1 != '\0') {
    FUN_2c5e8fb4(DAT_2c501ec4,DAT_2c501ec0,extraout_r2,cVar1,param_4);
    *pcVar2 = '\0';
  }
  FUN_2c62be1c(*(undefined4 *)(param_1 + 0x164));
  FUN_2c62be1c(*(undefined4 *)(param_1 + 0x154));
  FUN_2c5017b8(param_1 + 0x144);
  FUN_2c501aa0(param_1 + 0xe0);
  FUN_2c501924(param_1 + 0x88);
  FUN_2c501924(param_1 + 0x30);
  return param_1;
}

