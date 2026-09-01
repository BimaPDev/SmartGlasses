/* FUN_10025098 @ 0x10025098 */

void FUN_10025098(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined2 param_5)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)*param_1;
  iVar2 = *DAT_100250f4;
  do {
    if (puVar3 == (undefined2 *)0x0) {
LAB_100250d6:
      if (*DAT_100250f4 == iVar2) {
        return;
      }
      FUN_1013cdc0();
    }
    else {
      iVar1 = FUN_1011ea20(puVar3,param_2,0x24);
      if (iVar1 == 0) {
        *(undefined4 *)(puVar3 + 0x12) = param_3;
        *(undefined4 *)(puVar3 + 0x14) = param_4;
        puVar3 = puVar3 + 0x16;
        *puVar3 = param_5;
        goto LAB_100250d6;
      }
    }
    puVar3 = *(undefined2 **)(puVar3 + 0x18);
  } while( true );
}

