/* FUN_2c4fb894 @ 0x2c4fb894 */

undefined4 FUN_2c4fb894(undefined4 param_1,uint param_2,uint param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  undefined2 local_418;
  undefined1 auStack_416 [1014];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  if (*DAT_2c4fb8f8 == param_3) {
    local_18 = DAT_2c4fb71c;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0xe2,DAT_2c4fb728,DAT_2c4fb724);
  }
  iVar3 = FUN_2c4fc02c(param_3);
  piVar1 = DAT_2c4f5c78;
  if (iVar3 != 0) {
    local_20 = DAT_2c4fb900;
    uStack_1c = DAT_2c4fb8fc;
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x5c,DAT_2c4fb908,DAT_2c4fb904);
  }
  pbVar4 = *(byte **)(DAT_2c4fb90c + param_3 * 4);
  local_418 = *(undefined2 *)(pbVar4 + 4);
  uVar5 = (uint)*pbVar4;
  if (uVar5 == 1) {
    uVar2 = FUN_2c4f63bc(local_418,param_1);
    return uVar2;
  }
  if (uVar5 - 2 < 2) {
    iVar3 = *DAT_2c4f5c74;
    if (0x400 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_2c673ca8(DAT_2c4f5c7c,param_2,0x400,0);
    }
    FUN_2c674668(auStack_416);
    uVar2 = FUN_2c4f699c(piVar1 + 3,&local_418,param_2 + 2);
    iVar6 = *piVar1;
    if (iVar6 != 0) {
      FUN_2c64723c(iVar6);
    }
    if (*DAT_2c4f5c74 == iVar3) {
      return uVar2;
    }
                    /* WARNING: Subroutine does not return */
    stack_chk_fail();
  }
  return 0xffffffff;
}

