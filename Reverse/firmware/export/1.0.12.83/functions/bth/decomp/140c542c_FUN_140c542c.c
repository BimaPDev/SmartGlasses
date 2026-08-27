/* FUN_140c542c @ 0x140c542c */

undefined4 FUN_140c542c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = FUN_140c03c0(DAT_140c548c);
  iVar4 = *(int *)(*param_1 + 0xc);
  if (*(int *)(iVar4 + iVar2 * 4) == 0) {
    puVar3 = (undefined4 *)FUN_140bff34(0x44);
    uVar1 = DAT_140c5490;
    *(undefined2 *)(puVar3 + 4) = 0;
    *(undefined1 *)((int)puVar3 + 0x12) = 0;
    puVar3[0xd] = 0;
    *(undefined1 *)((int)puVar3 + 0x43) = 0;
    *puVar3 = uVar1;
    puVar3[1] = 0;
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
    FUN_140cc7a4(puVar3,param_1);
    FUN_140c054c(*param_1,puVar3,iVar2);
  }
  return *(undefined4 *)(iVar4 + iVar2 * 4);
}

