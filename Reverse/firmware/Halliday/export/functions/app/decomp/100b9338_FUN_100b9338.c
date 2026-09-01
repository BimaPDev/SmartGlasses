/* FUN_100b9338 @ 0x100b9338 */

undefined4 FUN_100b9338(int param_1,uint param_2)

{
  undefined1 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  piVar2 = DAT_100b937c;
  uVar3 = DAT_100b937c[3];
  if ((uVar3 + param_1 <= (uint)DAT_100b937c[4]) && (param_2 <= uVar3)) {
    while( true ) {
      iVar4 = *piVar2;
      if (uVar3 < param_2) {
        piVar2[3] = uVar3 + 1;
        *(undefined1 *)(iVar4 + uVar3) = 0;
      }
      else {
        uVar1 = *(undefined1 *)(iVar4 + (uVar3 - param_2));
        piVar2[3] = uVar3 + 1;
        *(undefined1 *)(iVar4 + uVar3) = uVar1;
      }
      if (param_1 == 1) break;
      param_1 = param_1 + -1;
      uVar3 = piVar2[3];
    }
    return 1;
  }
  return 0;
}

