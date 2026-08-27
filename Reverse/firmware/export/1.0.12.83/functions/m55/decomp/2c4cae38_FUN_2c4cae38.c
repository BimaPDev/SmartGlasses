/* FUN_2c4cae38 @ 0x2c4cae38 */

undefined4 FUN_2c4cae38(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_2c4cf288();
  iVar2 = FUN_2c4d70a4(param_1 + 0x1c4);
  if (iVar2 == 0) {
    return 0x402;
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == 0x200b) {
    return 0x203;
  }
  uVar3 = 0x201;
  if ((iVar1 - 0x2000U & 0xffff) < 0x1000) {
    uVar3 = 0x402;
  }
  return uVar3;
}

