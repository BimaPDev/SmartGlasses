/* FUN_2c65fe52 @ 0x2c65fe52 */

int FUN_2c65fe52(undefined4 *param_1,uint param_2,int param_3,uint param_4,char param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = param_1;
  if (param_5 == '\0') {
    if ((param_4 & 0x4a) == 0x40) {
      do {
        uVar3 = param_2 & 7;
        param_2 = param_2 >> 3;
        puVar2 = puVar2 + -1;
        *puVar2 = *(undefined4 *)(param_3 + (uVar3 + 4) * 4);
      } while (param_2 != 0);
    }
    else {
      if ((param_4 & 0x4000) == 0) {
        iVar4 = 4;
      }
      else {
        iVar4 = 0x14;
      }
      do {
        uVar3 = param_2 & 0xf;
        param_2 = param_2 >> 4;
        puVar2 = puVar2 + -1;
        *puVar2 = *(undefined4 *)(param_3 + (uVar3 + iVar4) * 4);
      } while (param_2 != 0);
    }
  }
  else {
    do {
      puVar2 = puVar2 + -1;
      *puVar2 = *(undefined4 *)(param_3 + (param_2 % 10 + 4) * 4);
      bVar1 = 9 < param_2;
      param_2 = param_2 / 10;
    } while (bVar1);
  }
  return (int)param_1 - (int)puVar2 >> 2;
}

