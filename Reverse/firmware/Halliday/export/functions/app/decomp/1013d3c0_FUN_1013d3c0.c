/* FUN_1013d3c0 @ 0x1013d3c0 */

void FUN_1013d3c0(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  int extraout_r1;
  int extraout_r2;
  byte *pbVar3;
  
  do {
    pbVar3 = param_1 + 1;
    if (*param_1 == 0) {
      pbVar2 = (byte *)(param_2 + -1);
      while( true ) {
        pbVar2 = pbVar2 + 1;
        bVar1 = *pbVar2;
        pbVar3 = (byte *)(uint)bVar1;
        if (pbVar3 == (byte *)0x0) break;
        if (param_3 == 0) goto LAB_1013d3dc;
        param_3 = param_3 + -1;
        *param_1 = bVar1;
        param_1 = param_1 + 1;
      }
      if (param_3 != 0) {
        *param_1 = bVar1;
        return;
      }
LAB_1013d3dc:
      FUN_10068cd8();
      param_2 = extraout_r1;
      param_3 = extraout_r2;
    }
    else if (param_3 == 0) goto LAB_1013d3dc;
    param_3 = param_3 + -1;
    param_1 = pbVar3;
  } while( true );
}

