/* FUN_2c44b346 @ 0x2c44b346 */

void FUN_2c44b346(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
                    /* WARNING: Could not recover jumptable at 0x2c44b352. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)puVar1[6])(*param_1,*puVar1,puVar1,puVar1[1],param_1);
  return;
}

