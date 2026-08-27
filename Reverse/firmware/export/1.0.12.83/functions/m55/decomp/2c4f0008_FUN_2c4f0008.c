/* FUN_2c4f0008 @ 0x2c4f0008 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4f0008(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 local_21c;
  undefined1 auStack_218 [508];
  undefined4 local_1c;
  
  uVar4 = 0;
  local_1c = *_LAB_2c4f0088;
  local_21c = 0;
  FUN_2c674268(auStack_218,0,0x1fc,0);
  uVar1 = _LAB_2c4f0098;
  if (param_2 != 0) {
    puVar5 = (undefined1 *)(param_1 + -1);
    do {
      iVar3 = 0x200 - uVar4;
      iVar2 = (int)&local_21c + uVar4;
      uVar4 = uVar4 + 5;
      puVar5 = puVar5 + 1;
      FUN_2c66b450(iVar2,iVar3,uVar1,*puVar5);
      if (0x1ff < uVar4) break;
    } while (puVar5 != (undefined1 *)(param_2 + param_1 + -1));
  }
                    /* WARNING: Subroutine does not return */
  TRACE(4,0x99,_LAB_2c4f0094,_LAB_2c4f0090,_LAB_2c4f008c,&local_21c);
}

