/* FUN_2c48d0a8 @ 0x2c48d0a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_2c48d0a8(undefined1 param_1,uint param_2,uint *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint auStack_24 [2];
  undefined4 uStack_1c;
  uint *puStack_18;
  undefined4 uStack_14;
  
  puVar1 = _LAB_2c48d108;
  if (param_4 == 0) {
    auStack_24[0] = param_2;
    FUN_2c644044(*_LAB_2c48d108,0xffffffff);
    uVar4 = *_LAB_2c48d10c;
    if (uVar4 < 0x100000) {
      uVar3 = uVar4 + 1;
    }
    else {
      uVar3 = 1;
      uVar4 = 0;
    }
    uVar2 = *puVar1;
    *_LAB_2c48d10c = uVar3;
    FUN_2c644080(uVar2);
    puStack_18 = auStack_24;
    uStack_14 = CONCAT22(uStack_14._2_2_,4);
    auStack_24[0] = uVar4;
  }
  else {
    uStack_14 = CONCAT22(uStack_14._2_2_,(short)param_4);
    auStack_24[0] = param_2;
    puStack_18 = param_3;
  }
  uStack_1c = CONCAT31(uStack_1c._1_3_,param_1);
  FUN_2c4f7174(uStack_1c,puStack_18,uStack_14);
  return 0;
}

