/* FUN_2c47fbb8 @ 0x2c47fbb8 */

void FUN_2c47fbb8(int param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar1 = FUN_2c47f410();
  if ((iVar1 == 0) && (uVar3 = (uint)(char)(param_5 + -1), -1 < (int)uVar3)) {
    puVar2 = (uint *)(param_4 + (uVar3 + 1) * 4);
    puVar4 = (uint *)(param_1 + (uVar3 + 1) * 4);
    do {
      puVar2 = puVar2 + -1;
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + -1;
      if (*puVar4 < *puVar2) {
        return;
      }
    } while ((*puVar4 <= *puVar2) && ((uVar3 & 0x80) == 0));
  }
  FUN_2c47f470(param_1,param_1,param_4);
  return;
}

