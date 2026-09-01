/* FUN_1013d3f0 @ 0x1013d3f0 */

void FUN_1013d3f0(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint extraout_r2;
  
  iVar1 = FUN_1011ea10(param_2);
  uVar2 = iVar1 + 1;
  if (uVar2 <= param_3) goto LAB_1013d408;
LAB_1013d404:
  do {
    FUN_10068cd8();
    uVar2 = extraout_r2;
LAB_1013d408:
    if (param_2 <= param_1) {
      if (param_1 < param_2 + uVar2) goto LAB_1013d404;
      if (param_2 != param_1) goto LAB_1013d41c;
    }
    if (param_1 + uVar2 <= param_2) {
LAB_1013d41c:
      FUN_1011ea40(param_1,param_2);
      return;
    }
  } while( true );
}

