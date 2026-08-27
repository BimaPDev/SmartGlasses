/* FUN_2c4ede10 @ 0x2c4ede10 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2c4ede10(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  
  func_0x2c4fe0a8();
  puVar1 = _LAB_2c4edf1c;
  FUN_2c60438c();
  func_0x2c4fe0a8();
  uVar2 = FUN_2c606a10();
  func_0x2c4ebddc();
  FUN_2c607048(uVar2,0x2064);
  FUN_2c627e28(uVar2,1);
  FUN_2c606d60(uVar2,0xff000000,0);
  uVar3 = FUN_2c637344(uVar2);
  uVar5 = *(undefined4 *)(param_1 + 4);
  *puVar1 = uVar3;
  FUN_2c638730(uVar3,uVar5);
  FUN_2c606e38(*puVar1,_LAB_2c4edf20,0);
  FUN_2c606e20(*puVar1,0xffffffff,0);
  FUN_2c607048(*puVar1,0x2064,0x27d1);
  FUN_2c606e5c(*puVar1,2,0);
  lv_obj_add_flag_invalidate(*puVar1,2);
  FUN_2c606b6c(*puVar1,0x2e);
  FUN_2c606e38(*puVar1,_LAB_2c4edf20,0);
  FUN_2c606e20(*puVar1,0xffffffff,0);
  FUN_2c607048(*puVar1,0x2064,0x27d1);
  iVar4 = FUN_2c602de4();
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    TRACE(4,0x53,_LAB_2c4edf38,_LAB_2c4edf34,_LAB_2c4edf30);
  }
  FUN_2c602df0();
  FUN_2c602f64(iVar4,*puVar1);
  FUN_2c603110(*puVar1);
  FUN_2c602454(*puVar1,_LAB_2c4edf24,0xd,0);
  FUN_2c602454(*puVar1,DAT_2c4edf28,0x21,0);
  if (((undefined4 *)*DAT_2c4edf2c != (undefined4 *)0x0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)*DAT_2c4edf2c, UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x2c4edf02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar2);
    return;
  }
  return;
}

