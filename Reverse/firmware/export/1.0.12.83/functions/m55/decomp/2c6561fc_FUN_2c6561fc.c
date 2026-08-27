/* FUN_2c6561fc @ 0x2c6561fc */

undefined4 FUN_2c6561fc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar2 = FUN_2c64cf04(DAT_2c65625c);
  iVar4 = *(int *)(*param_1 + 0xc);
  if (*(int *)(iVar4 + iVar2 * 4) == 0) {
    puVar3 = (undefined4 *)FUN_2c64ca5c(0x70);
    uVar1 = DAT_2c656260;
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
    FUN_2c6600f4(puVar3,param_1);
    FUN_2c64d090(*param_1,puVar3,iVar2);
  }
  return *(undefined4 *)(iVar4 + iVar2 * 4);
}

