/* FUN_2c621504 @ 0x2c621504 */

undefined4 FUN_2c621504(int param_1,int param_2,int param_3,int param_4,byte param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  do {
    uVar1 = uVar5 & 0xff;
    uVar2 = uVar5 & 0xff;
    uVar3 = uVar5 & 0xff;
    uVar4 = uVar5 & 0xff;
    uVar5 = uVar5 + 1;
    param_1 = *(int *)(param_1 +
                      (((int)(uint)param_5 >> uVar4 & 1U) +
                      ((param_4 >> uVar3 & 1U) +
                      ((param_3 >> uVar2 & 1U) + (param_2 >> uVar1 & 1U) * 2) * 2) * 2) * 4);
    if (param_1 == 0) {
      return 0xffffffff;
    }
  } while (uVar5 != 8);
  return *(undefined4 *)(param_1 + 0x40);
}

