/* FUN_100796ec @ 0x100796ec */

undefined4 FUN_100796ec(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_10061948();
  puVar3 = (undefined4 *)**(undefined4 **)(param_1 + 4);
  do {
    if ((int)(puVar3[2] << 0x1e) < 0) {
      return 0;
    }
    iVar2 = FUN_10061948();
  } while ((uint)(iVar2 - iVar1) >> 5 < 0xbb9);
  FUN_100a5b78(DAT_10079748 | (DAT_10079744 - DAT_10079740) * 0x20 & 0xff00U,DAT_10079750,
               DAT_1007974c,2,puVar3[2],*puVar3);
  return 0xffffff8c;
}

