/* FUN_140a2224 @ 0x140a2224 */

void FUN_140a2224(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar4 = DAT_140a2248;
  puVar3 = DAT_140a2244;
  *DAT_140a2244 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3 = DAT_140a2250;
  *DAT_140a224c = 0;
  *puVar3 = 0;
  *puVar4 = 0;
  uVar5 = DAT_140a2220;
  piVar1 = DAT_140a2200;
  FUN_1402a6e8(4,0x50,DAT_140a220c,DAT_140a2208,DAT_140a2204,DAT_140a2220,*DAT_140a2200,param_1,
               param_2);
  iVar6 = *piVar1;
  if (2 < iVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_1402b0f8(DAT_140a221c,uVar5,iVar6);
  }
  FUN_140e5658(param_1,0,param_2);
  if (*DAT_140a2210 == 0) {
    uVar5 = FUN_140a26ac(param_1,param_2);
    iVar2 = DAT_140a2214;
    *piVar1 = *piVar1 + 1;
    *(undefined4 *)(iVar2 + iVar6 * 4) = uVar5;
    return;
  }
  uVar5 = FUN_140a26ac(param_1,param_2);
  *DAT_140a2218 = uVar5;
  return;
}

