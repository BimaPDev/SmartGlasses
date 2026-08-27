/* FUN_140c9384 @ 0x140c9384 */

undefined4 FUN_140c9384(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = FUN_140c03c0(DAT_140c93e4);
  iVar4 = *(int *)(*param_1 + 0xc);
  if (*(int *)(iVar4 + iVar2 * 4) == 0) {
    puVar3 = (undefined4 *)FUN_140bff34(0x70);
    uVar1 = DAT_140c93e8;
    puVar3[1] = 0;
    *puVar3 = uVar1;
    *(undefined1 *)(puVar3 + 4) = 0;
    puVar3[0xf] = 0;
    *(undefined1 *)(puVar3 + 0x1b) = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    FUN_140d3008(puVar3,param_1);
    FUN_140c054c(*param_1,puVar3,iVar2);
  }
  return *(undefined4 *)(iVar4 + iVar2 * 4);
}

