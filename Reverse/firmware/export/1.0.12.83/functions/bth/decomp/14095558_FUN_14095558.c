/* FUN_14095558 @ 0x14095558 */

void FUN_14095558(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = (param_2 & 0xff00) - 0x1000;
  if (iVar1 < 0) {
    iVar1 = (param_2 & 0xff00) - 0xf01;
  }
  puVar4 = DAT_140955a0 + 0x40;
  puVar3 = DAT_140955a0;
  do {
    pcVar2 = (code *)*puVar3;
    if ((pcVar2 != (code *)0x0) && ((1 << (iVar1 >> 8 & 0xffU) & puVar3[1]) != 0)) {
      (*pcVar2)(param_1,param_2,param_3,pcVar2,param_4);
    }
    puVar3 = puVar3 + 2;
  } while (puVar3 != puVar4);
  return;
}

