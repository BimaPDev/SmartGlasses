/* FUN_2c6214bc @ 0x2c6214bc */

void FUN_2c6214bc(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_3 == 1) {
    uVar3 = 7;
  }
  else if (param_3 == 2) {
    uVar3 = 3;
  }
  else {
    uVar3 = 1;
  }
  bVar2 = (byte)((param_4 & ~(-1 << (param_3 & 0xff))) << (param_3 * (uVar3 & ~param_2) & 0xff));
  uVar1 = param_2 * param_3 >> 3;
  if ((uVar3 & param_2) != 0) {
    bVar2 = bVar2 | *(byte *)(param_1 + uVar1);
  }
  *(byte *)(param_1 + uVar1) = bVar2;
  return;
}

