/* FUN_10086bac @ 0x10086bac */

undefined4 FUN_10086bac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 == 0) && (param_1 = FUN_10092f04(), param_1 == 0)) {
    FUN_10094174(2,DAT_10086bdc,0x38,DAT_10086bd8,DAT_10086bd4,param_2);
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}

